@class NSNumber, NSString;

@interface FlutterActionBarIconConfig : NSObject

@property (retain, nonatomic) NSNumber *iconId;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *iconColor;
@property (copy, nonatomic) NSString *text;

+ (id)makeWithIconId:(id)a0 type:(id)a1 iconColor:(id)a2 text:(id)a3;
+ (id)fromMap:(id)a0;

- (id)toMap;
- (void).cxx_destruct;

@end
