@class NSArray, NSString;

@interface BDSimURLObject : NSObject <BDSimURLModel> {
    NSArray *_URLList;
}

@property (copy, nonatomic) NSArray *originURLList;
@property (copy, nonatomic) NSArray *whiteKeys;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *fileCs;
@property (copy, nonatomic) NSString *URLKey;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) double sizeByte;
@property (copy, nonatomic) NSString *URI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLList;
- (void)setURLList:(id)a0;
- (void)setFileCheckSum:(id)a0;
- (void)setWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (void)setHeight:(double)a0;

@end
