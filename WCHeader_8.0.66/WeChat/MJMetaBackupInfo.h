@class NSString, OMCGeographicInfo, NSDate;

@interface MJMetaBackupInfo : NSObject

@property (retain, nonatomic) NSString *materialID;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) OMCGeographicInfo *geoInfo;

- (void).cxx_destruct;

@end
