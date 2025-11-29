@class UIImage, NSString, NSObject;

@interface AttachementObjectItem : NSObject

@property (nonatomic) SEL selAction;
@property (retain, nonatomic) UIImage *oImage;
@property (retain, nonatomic) NSString *nsTitle;
@property (retain, nonatomic) NSString *nsDesc;
@property (retain, nonatomic) NSObject *object;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isRedCode;
@property (nonatomic) unsigned int attachementID;
@property (retain, nonatomic) NSString *pathKey;

- (void).cxx_destruct;

@end
