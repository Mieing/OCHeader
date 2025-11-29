@class NSString, NSNumber, AWEURLModel;

@interface AWEMusicDetailInspirationModel : NSObject

@property (copy, nonatomic) NSString *inspirationID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) NSString *shootSameDescription;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (nonatomic) long long materialType;
@property (nonatomic) unsigned long long inspirationType;
@property (readonly, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) BOOL isDataAvailable;
@property (readonly, nonatomic) BOOL shouldShowQuickFlashRedEnvelopeGuide;

- (void)updateDataWithResponseModel:(id)a0;
- (void).cxx_destruct;

@end
