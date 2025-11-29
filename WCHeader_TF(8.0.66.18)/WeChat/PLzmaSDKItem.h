@class NSString, NSDate;

@interface PLzmaSDKItem : NSObject {
    struct SharedPtr<plzma::Item> { struct Item *_ptr; } _item;
}

@property (readonly, nonatomic) const void *itemSPtr;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned int index;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long packSize;
@property (nonatomic) unsigned int crc32;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *accessDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (nonatomic) BOOL encrypted;
@property (nonatomic) BOOL isDir;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPath:(id)a0 andIndex:(unsigned int)a1;
- (id)initWithItemM:(void *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
