@class NSString, NSMutableArray;

@interface FinderLiveCheerInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *cheerIconInfo;
@property (retain, nonatomic) NSString *cheerButtonUrl;
@property (nonatomic) unsigned int enable;
@property (retain, nonatomic) NSMutableArray *animation;
@property (retain, nonatomic) NSString *cheerInfoId;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL isModified;
@property (nonatomic) unsigned int liveObjectVersion;

+ (void)initialize;

@end
