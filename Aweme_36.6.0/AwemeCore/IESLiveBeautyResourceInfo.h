@class NSString;

@interface IESLiveBeautyResourceInfo : NSObject

@property (nonatomic) long long beautyType;
@property (retain, nonatomic) NSString *panelName;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL needABGroup;
@property (nonatomic) unsigned long long abGroup;
@property (nonatomic) BOOL needMultiCategory;
@property (nonatomic) BOOL needDownLoadItemResource;
@property (copy, nonatomic) id /* block */ extraParseBlock;

- (void).cxx_destruct;
- (id)init;

@end
