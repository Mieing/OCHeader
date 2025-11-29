@class NSString;

@interface FinderPoiInteractionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *samePoiLabel;
@property (nonatomic) unsigned long long samePoiObject;
@property (retain, nonatomic) NSString *samePoiName;
@property (retain, nonatomic) NSString *samePoiId;

+ (void)initialize;

- (void)setSamePoiId:(id)a0;
- (id)samePoiId;
- (void)setSamePoiName:(id)a0;
- (id)samePoiName;
- (void)setSamePoiObject:(unsigned long long)a0;
- (unsigned long long)samePoiObject;
- (void)setSamePoiLabel:(id)a0;
- (id)samePoiLabel;

@end
