@class NSString;

@interface QConfigPreference : NSObject

@property (readonly, copy, nonatomic) NSString *businessKey;
@property (readonly, copy, nonatomic) NSString *miniProgramID;
@property (readonly, copy, nonatomic) NSString *configDirectoryPath;

- (id)initWithBusinessKey:(id)a0 miniProgramID:(id)a1 configDirectoryPath:(id)a2;
- (void).cxx_destruct;

@end
