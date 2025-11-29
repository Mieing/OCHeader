@class NSData, NSMutableArray;

@interface UDRPeriodGetResourceDescriptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *reqItems;
@property (retain, nonatomic) NSMutableArray *appParameters;
@property (retain, nonatomic) NSData *lastOffset;

+ (void)initialize;

@end
