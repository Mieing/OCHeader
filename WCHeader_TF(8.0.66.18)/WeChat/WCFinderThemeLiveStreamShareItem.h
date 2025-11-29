@class NSString;

@interface WCFinderThemeLiveStreamShareItem : NSObject <NSCoding, NSCopying, PBCoding>

@property (retain, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *themeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mainTitle;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_themeId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
