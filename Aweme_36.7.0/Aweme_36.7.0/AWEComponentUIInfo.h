@class NSString;

@interface AWEComponentUIInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long height;
@property (nonatomic) long long radius;
@property (nonatomic) long long iconSize;
@property (nonatomic) long long leftMargin;
@property (nonatomic) long long topMargin;
@property (nonatomic) long long rightMargin;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *darkColor;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *darkBgColor;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) long long hasTail;
@property (copy, nonatomic) NSString *align;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
