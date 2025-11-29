@class NSString, NSMutableAttributedString;

@interface IESECGoodsFeedActionModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableAttributedString *attributeText;
@property (nonatomic) BOOL interactionEnabled;

- (void).cxx_destruct;
- (id)init;

@end
