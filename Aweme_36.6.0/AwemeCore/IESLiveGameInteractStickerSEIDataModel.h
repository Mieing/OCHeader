@class NSString;

@interface IESLiveGameInteractStickerSEIDataModel : NSObject

@property (copy, nonatomic) NSString *recordID;
@property (nonatomic) unsigned long long stickerType;

+ (id)modelWithSEIData:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
