@class NSArray, NSDictionary;

@interface IESGurdSettingsResponseExtra : NSObject

@property (copy, nonatomic) NSArray *noLocalAk;
@property (copy, nonatomic) NSDictionary *probe;
@property (nonatomic) int offlineFileType;

+ (id)extraWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
