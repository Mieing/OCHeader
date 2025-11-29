@class NSString, NSDictionary, NSNumber;
@protocol Optional;

@interface BDADLiveRoomCardData : JSONModel

@property (copy, nonatomic) NSString<Optional> *logExtra;
@property (copy, nonatomic) NSString<Optional> *lynxUrl;
@property (copy, nonatomic) NSString<Optional> *webUrl;
@property (copy, nonatomic) NSString<Optional> *webTitle;
@property (copy, nonatomic) NSString<Optional> *roomID;
@property (copy, nonatomic) NSString<Optional> *source;
@property (copy, nonatomic) NSString<Optional> *title;
@property (copy, nonatomic) NSString<Optional> *complianceData;
@property (copy, nonatomic) NSString<Optional> *buttonText;
@property (copy, nonatomic) NSString<Optional> *downloadUrl;
@property (copy, nonatomic) NSDictionary<Optional> *appData;
@property (retain, nonatomic) NSNumber<Optional> *appleID;
@property (retain, nonatomic) NSNumber<Optional> *styleType;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
