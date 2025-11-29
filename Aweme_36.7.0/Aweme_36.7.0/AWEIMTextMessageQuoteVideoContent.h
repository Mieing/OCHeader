@class NSArray, NSString;

@interface AWEIMTextMessageQuoteVideoContent : NSObject

@property (nonatomic) unsigned long long aweType;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long massMsg;
@property (nonatomic) unsigned long long postType;
@property (nonatomic) unsigned long long fromGallery;
@property (copy, nonatomic) NSArray *checkPics;
@property (copy, nonatomic) NSArray *checkTexts;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *posterMd5;
@property (copy, nonatomic) NSString *posterOid;
@property (copy, nonatomic) NSString *posterSkey;
@property (copy, nonatomic) NSString *videoTkey;
@property (copy, nonatomic) NSString *videoSkey;
@property (copy, nonatomic) NSString *videoMd5;

- (id)initWithContentDict:(id)a0;
- (void).cxx_destruct;

@end
