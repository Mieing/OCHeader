@class NSString;

@interface AWEMachoHeaderObject : NSObject

@property (nonatomic) const struct mach_header_64 { } *machoHeader;
@property (retain, nonatomic) NSString *sectionName;

- (id)initWithMachoHeader:(struct mach_header_64 { } *)a0 andSectionName:(char *)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
