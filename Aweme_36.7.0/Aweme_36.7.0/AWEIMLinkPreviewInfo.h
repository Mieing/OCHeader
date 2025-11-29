@class NSString, IESIMLinkCardURLExtra;

@interface AWEIMLinkPreviewInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) long long version;
@property (nonatomic) double updateTime;
@property (copy, nonatomic) NSString *md5String;
@property (nonatomic) BOOL isValid;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) IESIMLinkCardURLExtra *urlCardExtra;

- (id)getInfoDict;
- (id)initWithInfoDict:(id)a0;
- (void).cxx_destruct;

@end
