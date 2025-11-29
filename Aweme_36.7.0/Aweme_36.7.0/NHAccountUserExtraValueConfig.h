@interface NHAccountUserExtraValueConfig : NSObject

@property (copy, nonatomic) id /* block */ validateBlock;
@property (copy, nonatomic) id /* block */ extraValueErrorParser;
@property (copy, nonatomic) id /* block */ customUserValueParser;
@property (copy, nonatomic) id /* block */ singleToMultiMigrationBlock;
@property (copy, nonatomic) id /* block */ multiToSingleMigrationBlock;

- (void).cxx_destruct;

@end
