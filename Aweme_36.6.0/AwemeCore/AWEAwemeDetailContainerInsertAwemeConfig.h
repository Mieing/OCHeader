@class NSString, AWEAwemeModel;

@interface AWEAwemeDetailContainerInsertAwemeConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long insertIndex;
@property (nonatomic) BOOL shouldForceReload;
@property (retain, nonatomic) NSString *bizType;
@property (copy, nonatomic) id /* block */ insertDataBlock;
@property (copy, nonatomic) id /* block */ insertCompleteBlock;

- (void).cxx_destruct;

@end
