@class NSMutableArray;

@interface TextStatePublishCustomIconPanelReportObject : NSObject

@property (nonatomic) long long confirmButtonClickCount;
@property (nonatomic) long long cancelButtonClickCount;
@property (nonatomic) long long switchIconButtonClickCount;
@property (retain, nonatomic) NSMutableArray *hadSelectIconIdArray;
@property (retain, nonatomic) NSMutableArray *hadInputIconDescArray;

- (id)init;
- (id)getCustomStatusOptCntJsonString;
- (id)getCustomStatusIconIdString;
- (id)getCustomStatusInputIconDescString;
- (id)makeReportJsonString:(id)a0;
- (void).cxx_destruct;

@end
