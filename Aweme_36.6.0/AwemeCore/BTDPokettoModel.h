@class NSString, NSArray, NSDictionary;

@interface BTDPokettoModel : NSObject <BTDPokettoModel>

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *extraValue;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *appleId;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSArray *clickTrackUrlList;
@property (copy, nonatomic) NSArray *playTrackUrlList;
@property (copy, nonatomic) NSArray *playoverTrackUrlList;
@property (copy, nonatomic) NSArray *effectivePlayTrackUrlList;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) unsigned long long index;
@property (nonatomic) double timeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
