@class NSString;

@interface BDARVLiveRomModel : JSONModel

@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *roomID;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
