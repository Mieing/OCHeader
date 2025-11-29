@class NSArray, NSString;

@interface AWEStory25ListReadRequest : AWESocialRelationRequest

@property (copy, nonatomic) NSArray *userIDList;
@property (copy, nonatomic) NSArray *userModelList;
@property (nonatomic) BOOL needWriteCache;
@property (retain, nonatomic) NSString *readScene;

- (void).cxx_destruct;

@end
