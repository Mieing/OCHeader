@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEFeedCacheInnerResponseModel : NSObject <AWEFeedCacheResponseModel>

@property (retain, nonatomic) NSMutableArray *data;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
