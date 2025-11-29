@class NSString, UIImage;

@interface MMFICBaseHeadImage : NSObject <FICEntity> {
    NSString *_entityUUID;
    NSString *_sourceImageUUID;
}

@property (retain, nonatomic) NSString *usrName;
@property (retain, nonatomic) NSString *sourceImgUrl;
@property (readonly, nonatomic) NSString *entityUUID;
@property (readonly, nonatomic) NSString *sourceImageUUID;
@property (readonly, nonatomic) NSString *formatName;
@property (readonly, nonatomic) UIImage *sourceImage;
@property (nonatomic) unsigned int eliminationFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genFICEntity:(id)a0;

- (id)init;
- (id /* block */)drawingBlockForImage:(id)a0;
- (void).cxx_destruct;

@end
