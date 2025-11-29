@class BaseRequest, NSMutableArray, NSString;

@interface ModFavItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int favId;
@property (nonatomic) unsigned int indexCount;
@property (retain, nonatomic) NSMutableArray *indexList;
@property (nonatomic) unsigned int objectCount;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (retain, nonatomic) NSString *replaceObject;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
