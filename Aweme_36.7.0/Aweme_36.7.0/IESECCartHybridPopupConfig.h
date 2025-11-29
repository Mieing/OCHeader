@class NSString, NSDictionary, IESECCartPopupUIConfig;

@interface IESECCartHybridPopupConfig : NSObject

@property (copy, nonatomic) NSString *popupCode;
@property (copy, nonatomic) NSString *bindNodeKey;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *pageBtm;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (copy, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) IESECCartPopupUIConfig *uiConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomFrame;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
