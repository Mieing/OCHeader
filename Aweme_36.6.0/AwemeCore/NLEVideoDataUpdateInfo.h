@class NSString;

@interface NLEVideoDataUpdateInfo : NSObject

@property (nonatomic) long long updateType;
@property (copy, nonatomic) NSString *tag;

- (id)p_updateTypeString;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithUpdate:(long long)a0;

@end
