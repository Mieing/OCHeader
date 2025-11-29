@class NSString, NSArray, NSData, NSNumber;

@interface ToygerBlobElemCapture : ToygerBaseModel

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) NSData *video;
@property (copy, nonatomic) NSString *videoMD5;
@property (copy, nonatomic) NSArray *picture;
@property (copy, nonatomic) NSArray *pictureToApp;
@property (retain, nonatomic) NSNumber *isVideoEvidence;

- (void).cxx_destruct;

@end
