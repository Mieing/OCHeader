@class NSData, NSMutableArray;

@interface MJTemplateListSvrDataCacheModel : NSObject {
    double _fetchTimeStamp;
}

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned int validityTerm;
@property (retain, nonatomic) NSMutableArray *templateList;
@property (retain, nonatomic) NSMutableArray *categoryList;
@property (retain, nonatomic) NSData *pageBuffer;

- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
