@class NSString, NSMutableArray;

@interface WAPlateAuthorizeSheetInfo : WAAuthorizeSheetInfo

@property (retain, nonatomic) NSMutableArray *plateList;
@property (retain, nonatomic) NSString *defaultPlateStr;
@property (retain, nonatomic) NSString *createSubDesc;
@property (nonatomic) BOOL isAcceptProtocol;

+ (id)convertPlateListFromProto:(id)a0;

- (id)init;
- (void)configInfoWithIconUrl:(id)a0 appName:(id)a1;
- (BOOL)configPlateInfoFromProto:(id)a0;
- (void).cxx_destruct;

@end
