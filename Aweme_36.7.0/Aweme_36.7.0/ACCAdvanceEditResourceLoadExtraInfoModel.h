@class NSNumber, NSError, NSString;

@interface ACCAdvanceEditResourceLoadExtraInfoModel : NSObject <DVEResourceLoadExtraInfoModelProtocol>

@property (copy, nonatomic) NSNumber *useCache;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
