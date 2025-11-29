@class NSString;

@interface CJPayOCRBPEAData : NSObject

@property (copy, nonatomic) NSString *requestAccessPolicy;
@property (copy, nonatomic) NSString *requestReadAlbumPolicy;
@property (copy, nonatomic) NSString *imagePickerPolicy;
@property (copy, nonatomic) NSString *photoPickerPolicy;
@property (copy, nonatomic) NSString *jumpSettingPolicy;
@property (copy, nonatomic) NSString *startRunningPolicy;
@property (copy, nonatomic) NSString *stopRunningPolicy;
@property (weak, nonatomic) id bridgeCommand;

- (void).cxx_destruct;

@end
