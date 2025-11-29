@class NSString, NSNumber;

@interface FlutterActionBarTitleConfig : NSObject

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *color;
@property (copy, nonatomic) NSString *subTitile;
@property (retain, nonatomic) NSNumber *subTitleColor;

+ (id)makeWithText:(id)a0 color:(id)a1 subTitile:(id)a2 subTitleColor:(id)a3;
+ (id)fromMap:(id)a0;

- (id)toMap;
- (void).cxx_destruct;

@end
