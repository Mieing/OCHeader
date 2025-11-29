@class NSData;

@interface FinderObjectListenInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSData *audioItem;
@property (retain, nonatomic) NSData *musicItem;

+ (void)initialize;

@end
