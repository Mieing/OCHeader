@class SKBuiltinBuffer_t, NSArray, NSString, NSMutableArray, EmotionBannerSet;
@protocol StoreEmotionGetDesignerEmojiListCgiDelegate;

@interface StoreEmotionGetDesignerEmojiListCgi : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_designerEmojiList;
    unsigned int m_designerUin;
    unsigned int m_opCode;
    unsigned int m_tagId;
    NSString *m_keyword;
    unsigned long long m_searchId;
    EmotionBannerSet *m_bannerSet;
    SKBuiltinBuffer_t *m_pageBuf;
    unsigned int m_eventID;
}

@property (weak, nonatomic) id<StoreEmotionGetDesignerEmojiListCgiDelegate> delegate;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) NSArray *emojiList;
@property (readonly, nonatomic) BOOL isRequesting;
@property (readonly, nonatomic) BOOL isNoSuchProduct;

- (id)init;
- (id)initWithDesignerUin:(unsigned int)a0;
- (id)initWithKeyword:(id)a0 searchId:(unsigned long long)a1;
- (id)initWithTagId:(unsigned int)a0;
- (id)initWithBannerSet:(id)a0;
- (BOOL)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callFailedDelegate;
- (void).cxx_destruct;

@end
