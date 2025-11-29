@class UIImage, MsgImgSearchPhashMemCache, CMessageWrap;

@interface MsgImgSearchPhashGetterContext : NSObject

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (weak, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long sessionID;
@property (retain, nonatomic) MsgImgSearchPhashMemCache *phashMemCache;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isForbidSearch;

- (void).cxx_destruct;

@end
