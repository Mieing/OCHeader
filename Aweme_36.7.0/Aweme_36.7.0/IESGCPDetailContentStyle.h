@class NSDictionary, NSString, UIColor;

@interface IESGCPDetailContentStyle : NSObject

@property (retain, nonatomic) NSDictionary *styleDict;
@property (readonly, nonatomic) NSDictionary *halfStyleDict;
@property (copy, nonatomic) NSString *floatType;
@property (nonatomic) BOOL shouldHideTab;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSDictionary *layout;
@property (copy, nonatomic) NSString *immeTitle;
@property (copy, nonatomic) NSString *identicalPlayBigTitle;
@property (copy, nonatomic) NSString *identicalPlaySmallTitle;

+ (id)styleWithDict:(id)a0;
+ (id)getColorWithKey:(id)a0 fromStyleDict:(id)a1;

- (void).cxx_destruct;
- (id)toDictionary;

@end
