@class NSString;

@interface GCVcInfoModel : NSObject

@property (retain, nonatomic) NSString *vcClassName;
@property (retain, nonatomic) NSString *vcPtr;
@property (retain, nonatomic) NSString *webViewUrl;
@property (nonatomic) BOOL isGameHostWebVc;
@property (nonatomic) BOOL isGameVc;
@property (retain, nonatomic) NSString *subVcGameHostWebUrl;

- (BOOL)isGameRelateVc;
- (id)description;
- (void).cxx_destruct;

@end
