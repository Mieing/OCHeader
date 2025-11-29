@class NSString, FinderLiveContact;

@interface FinderLiveMicPkInfoForBoard : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *micContact;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (retain, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;

+ (void)initialize;

@end
