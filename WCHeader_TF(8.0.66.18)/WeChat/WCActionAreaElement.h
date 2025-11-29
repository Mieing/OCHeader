@interface WCActionAreaElement : NSObject

@property (nonatomic) unsigned long long elementType;
@property (nonatomic) double realWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minWidth;
@property (nonatomic) double adjustedWidth;
@property (nonatomic) unsigned long long displayLine;

- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)hashString;

@end
