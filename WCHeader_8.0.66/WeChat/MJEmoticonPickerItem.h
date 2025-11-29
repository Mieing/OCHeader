@class NSData, NSString;

@interface MJEmoticonPickerItem : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL isWxAM;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (id)initWithEmoticonMd5:(id)a0;
- (void)saveEmoticon:(id /* block */)a0;
- (void).cxx_destruct;

@end
