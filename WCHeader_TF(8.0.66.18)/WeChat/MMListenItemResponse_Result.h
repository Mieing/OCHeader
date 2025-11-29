@class NSString, MMListenItem;

@interface MMListenItemResponse_Result : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) MMListenItem *item;
@property (nonatomic) BOOL isFilter;

+ (void)initialize;

@end
