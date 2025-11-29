@class NSString;

@interface MessagePatternInfo : NSObject <PBCoding, NSCoding>

@property (nonatomic) unsigned int m_uiLocalID;
@property (retain, nonatomic) NSString *m_nsPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_nsPattern;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
