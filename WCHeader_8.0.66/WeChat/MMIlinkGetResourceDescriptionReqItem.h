@class NSString, NSArray, NSMutableDictionary, NSDictionary;

@interface MMIlinkGetResourceDescriptionReqItem : NSObject

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSArray *resourceNameList;
@property (retain, nonatomic) NSMutableDictionary *localResources;
@property (retain, nonatomic) NSDictionary *projectParams;
@property (nonatomic) unsigned int qos;

- (void).cxx_destruct;

@end
