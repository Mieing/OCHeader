@class NSString, NSDictionary;

@interface ZimInitResponse : NSObject

@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *zimId;
@property (retain, nonatomic) NSString *protocol;
@property (retain, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) NSString *retCodeSub;
@property (retain, nonatomic) NSString *retMessageSub;
@property (retain, nonatomic) NSString *WishContent;
@property (retain, nonatomic) NSString *ControlConfig;
@property (retain, nonatomic) NSString *ImageCount;
@property (retain, nonatomic) NSDictionary *ossConfig;

+ (Class)extParamsElementClass;

- (void).cxx_destruct;

@end
