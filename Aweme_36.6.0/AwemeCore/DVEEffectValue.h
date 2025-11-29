@class UIColor, NSString, NSArray, NSURL, UIImage, NSNumber, NSIndexPath;
@protocol DVEResourceModelProtocol;

@interface DVEEffectValue : NSObject <NSCopying, NSMutableCopying, DVEResourceModelProtocol>

@property (nonatomic) unsigned long long valueType;
@property (nonatomic) unsigned long long beautyType;
@property (nonatomic) unsigned long long makeSubUp;
@property (nonatomic) unsigned long long valueState;
@property (nonatomic) long long subSelectIndex;
@property (retain, nonatomic) NSString *composerTag;
@property (retain, nonatomic) NSString *composerPath;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *animationType;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) id<DVEResourceModelProtocol> injectModel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sourcePath;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *assetImage;
@property (nonatomic) unsigned long long resourceTag;
@property (nonatomic) BOOL overlap;
@property (retain, nonatomic) NSNumber *intensity;
@property (retain, nonatomic) UIImage *highlightImage;
@property (copy, nonatomic) NSArray *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadModel:(id /* block */)a0;
- (void)downloadModel:(id /* block */)a0 progress:(id /* block */)a1;
- (void)downloadModelWithCompletion:(id /* block */)a0 progress:(id /* block */)a1;
- (id)initWithInjectModel:(id)a0;
- (void)updateFromModel:(id)a0;
- (void)initWithDownloadedModel:(id)a0;
- (id)initWithType:(unsigned long long)a0 Bundle:(id)a1 name:(id)a2 imageURL:(id)a3 assetImage:(id)a4 key:(id)a5 indensity:(float)a6;
- (id)initWithType:(unsigned long long)a0 Bundle:(id)a1 name:(id)a2 image:(id)a3 key:(id)a4 indensity:(float)a5;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)status;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
