@class NSString, NSNumber;

@interface DFEDataRow : NSObject

@property (copy, nonatomic) NSString *launch;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSNumber *index;
@property (nonatomic) unsigned long long length;

- (void).cxx_destruct;

@end
