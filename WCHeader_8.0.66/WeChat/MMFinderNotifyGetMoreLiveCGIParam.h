@class NSString, NSArray, NSData, FinderClientStatus;

@interface MMFinderNotifyGetMoreLiveCGIParam : NSObject

@property (copy, nonatomic) NSString *reportExtInfo;
@property (nonatomic) unsigned long long objectID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSArray *objectIDArray;
@property (nonatomic) unsigned int noticeType;

- (void).cxx_destruct;

@end
