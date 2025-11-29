@class NSValue, NSNumber;

@interface WCSheetComponentViewAttributes : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSValue *insetsValue;
@property (retain, nonatomic) NSNumber *fixedWidth;
@property (retain, nonatomic) NSNumber *useSystemLayoutSizeFittingSize;
@property (nonatomic) unsigned long long alignment;

+ (id)attributes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
