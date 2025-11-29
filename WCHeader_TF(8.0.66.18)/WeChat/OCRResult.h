@class NSString, NSArray;

@interface OCRResult : NSObject {
    unsigned int _ocrId;
    unsigned int _imageType;
    NSString *_oriString;
    NSString *_translation;
}

@property (nonatomic) unsigned int ocrId;
@property (nonatomic) unsigned int imageType;
@property (retain, nonatomic) NSString *oriString;
@property (retain, nonatomic) NSString *translation;
@property (retain, nonatomic) NSArray *translations;
@property (nonatomic) double angle;
@property (retain, nonatomic) NSString *fromLanguage;
@property (retain, nonatomic) NSString *toLanguage;
@property (retain, nonatomic) NSString *brandWording;
@property (nonatomic) BOOL newOcrmt;

- (void).cxx_destruct;

@end
