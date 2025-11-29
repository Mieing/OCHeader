@class NSString, UIColor;

@interface WCAdDynamicFeedElementValue : NSObject <NSCoding>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) double floatValue;
@property (nonatomic) BOOL shouldAdaptLengthValue;
@property (retain, nonatomic) UIColor *colorValue;

- (id)initWithString:(id)a0;
- (id)initWithNumber:(id)a0;
- (id)initWithFloat:(double)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fetchStringValue;
- (double)fetchFloatValue;
- (id)fetchColorValue;
- (void).cxx_destruct;

@end
