@class NSString, NSArray, NSMutableDictionary;

@interface TSPKUploadEvent : TSPKBaseEvent

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSArray *backtraces;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSMutableDictionary *filterParams;
@property (nonatomic) BOOL isALogUpload;
@property (nonatomic) unsigned long long type;

- (void)addExtraFilterParams:(id)a0;
- (void).cxx_destruct;
- (id)tag;

@end
