@class NSString, NSDictionary, NSArray, TTAccountNetRequestTrackerModel;

@interface TTAccountHttpRequest : NSObject

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *extraGetParams;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL follow302Redirect;
@property (nonatomic) BOOL dispatchNote;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL needHandlePictureVerify;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) TTAccountNetRequestTrackerModel *errorCaseTrackerModel;
@property (copy, nonatomic) NSArray *handledCodeList;

- (void)addExtraParams:(id)a0;
- (void).cxx_destruct;

@end
