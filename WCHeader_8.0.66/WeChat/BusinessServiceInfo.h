@class NSData, NSMutableArray;

@interface BusinessServiceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *title;
@property (retain, nonatomic) NSData *serviceUrl;
@property (retain, nonatomic) NSMutableArray *itemFieldList;

+ (void)initialize;

@end
