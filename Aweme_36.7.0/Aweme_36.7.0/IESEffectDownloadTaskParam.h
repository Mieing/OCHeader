@class NSString, NSDictionary;

@interface IESEffectDownloadTaskParam : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long level;
@property (nonatomic, getter=isPreload) BOOL preload;
@property (nonatomic, getter=isInsertFront) BOOL insertFront;
@property (copy, nonatomic) NSString *bizScene;
@property (copy, nonatomic) NSDictionary *bizData;

- (void).cxx_destruct;
- (id)init;

@end
