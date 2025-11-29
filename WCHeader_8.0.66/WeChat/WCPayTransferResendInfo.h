@class NSString;

@interface WCPayTransferResendInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *pic;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *leftBtnWording;
@property (retain, nonatomic) NSString *rightBtnWording;

+ (id)genFromDict:(id)a0;
+ (id)genFromUnion:(id)a0;

- (void).cxx_destruct;

@end
