@class UIColor, NSString, UIImage, IESIMCodeGenTagItemModel;

@interface IESIMGroupImpl.GroupParticipantTagModel : NSObject <IESIMGroupParticipantTagModelProtocol> {
    void /* function */ text;
    void /* function */ clickBlock;
    void /* function */ tagKey;
    void /* function */ levelKey;
    void /* function */ conversationID;
    void /* function */ secUid;
}

@property (nonatomic, retain) UIImage *iconLight;
@property (nonatomic, retain) UIImage *iconDark;
@property (nonatomic) long long iconWidth;
@property (nonatomic) long long iconHeight;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColorLight;
@property (nonatomic, retain) UIColor *textColorDark;
@property (nonatomic, retain) UIColor *backGroundColorLight;
@property (nonatomic, retain) UIColor *backGroundColorDark;
@property (nonatomic, copy) id /* block */ clickBlock;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic, retain) IESIMCodeGenTagItemModel *tagItemModel;
@property (nonatomic, copy) NSString *tagKey;
@property (nonatomic, copy) NSString *levelKey;
@property (nonatomic, copy) NSString *conversationID;
@property (nonatomic, copy) NSString *secUid;

- (id)initWithTagStyleModel:(id)a0;
- (id)initWithConfigModel:(id)a0 levelKey:(id)a1 convID:(id)a2 secUid:(id)a3;
- (id)initWithConfigModel:(id)a0 levelModel:(id)a1 convID:(id)a2 secUid:(id)a3;
- (void)adjustWithConfig:(id)a0 scene:(long long)a1;
- (void)trackTagShow:(id)a0 enterFrom:(id)a1;
- (void)trackTagClick:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
